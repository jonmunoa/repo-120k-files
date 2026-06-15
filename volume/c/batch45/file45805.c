// fichero 45805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45805;

Registro45805 crear_registro45805(int id) {
    Registro45805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
