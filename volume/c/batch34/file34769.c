// fichero 34769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34769;

Registro34769 crear_registro34769(int id) {
    Registro34769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
