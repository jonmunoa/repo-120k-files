// fichero 12753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12753;

Registro12753 crear_registro12753(int id) {
    Registro12753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
