// fichero 38917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38917;

Registro38917 crear_registro38917(int id) {
    Registro38917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
