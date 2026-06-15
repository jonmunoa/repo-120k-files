// fichero 6929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6929;

Registro6929 crear_registro6929(int id) {
    Registro6929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
