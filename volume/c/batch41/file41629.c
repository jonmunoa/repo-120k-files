// fichero 41629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41629;

Registro41629 crear_registro41629(int id) {
    Registro41629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
