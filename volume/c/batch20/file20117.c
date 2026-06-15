// fichero 20117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20117;

Registro20117 crear_registro20117(int id) {
    Registro20117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
