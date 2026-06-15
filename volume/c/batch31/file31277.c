// fichero 31277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31277;

Registro31277 crear_registro31277(int id) {
    Registro31277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
