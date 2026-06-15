// fichero 34865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34865;

Registro34865 crear_registro34865(int id) {
    Registro34865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
