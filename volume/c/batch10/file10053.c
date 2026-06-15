// fichero 10053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10053;

Registro10053 crear_registro10053(int id) {
    Registro10053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
