// fichero 14697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14697;

Registro14697 crear_registro14697(int id) {
    Registro14697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
