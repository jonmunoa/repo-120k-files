// fichero 27053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27053;

Registro27053 crear_registro27053(int id) {
    Registro27053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
