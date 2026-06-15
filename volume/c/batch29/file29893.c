// fichero 29893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29893;

Registro29893 crear_registro29893(int id) {
    Registro29893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
