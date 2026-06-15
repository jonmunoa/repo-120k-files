// fichero 21837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21837;

Registro21837 crear_registro21837(int id) {
    Registro21837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
