// fichero 20437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20437;

Registro20437 crear_registro20437(int id) {
    Registro20437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
