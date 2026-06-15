// fichero 10673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10673;

Registro10673 crear_registro10673(int id) {
    Registro10673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
