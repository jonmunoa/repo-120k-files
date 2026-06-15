// fichero 44893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44893;

Registro44893 crear_registro44893(int id) {
    Registro44893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
