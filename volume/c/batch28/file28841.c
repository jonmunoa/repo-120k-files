// fichero 28841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28841;

Registro28841 crear_registro28841(int id) {
    Registro28841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
