// fichero 17881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17881;

Registro17881 crear_registro17881(int id) {
    Registro17881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
