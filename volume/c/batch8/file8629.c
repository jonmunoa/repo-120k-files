// fichero 8629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8629;

Registro8629 crear_registro8629(int id) {
    Registro8629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
