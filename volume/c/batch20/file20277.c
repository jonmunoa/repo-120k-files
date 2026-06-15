// fichero 20277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20277;

Registro20277 crear_registro20277(int id) {
    Registro20277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
