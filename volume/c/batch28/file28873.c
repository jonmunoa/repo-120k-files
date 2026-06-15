// fichero 28873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28873;

Registro28873 crear_registro28873(int id) {
    Registro28873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
