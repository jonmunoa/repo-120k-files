// fichero 22777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22777;

Registro22777 crear_registro22777(int id) {
    Registro22777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
