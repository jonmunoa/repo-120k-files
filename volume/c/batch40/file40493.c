// fichero 40493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40493;

Registro40493 crear_registro40493(int id) {
    Registro40493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
