// fichero 20817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20817;

Registro20817 crear_registro20817(int id) {
    Registro20817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
