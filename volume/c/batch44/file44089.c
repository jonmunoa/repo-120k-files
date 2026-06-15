// fichero 44089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44089;

Registro44089 crear_registro44089(int id) {
    Registro44089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
