// fichero 34165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34165;

Registro34165 crear_registro34165(int id) {
    Registro34165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
