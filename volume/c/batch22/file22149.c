// fichero 22149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22149;

Registro22149 crear_registro22149(int id) {
    Registro22149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
