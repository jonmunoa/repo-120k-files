// fichero 34765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34765;

Registro34765 crear_registro34765(int id) {
    Registro34765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
