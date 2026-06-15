// fichero 5841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5841;

Registro5841 crear_registro5841(int id) {
    Registro5841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
