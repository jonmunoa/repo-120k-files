// fichero 19193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19193;

Registro19193 crear_registro19193(int id) {
    Registro19193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
