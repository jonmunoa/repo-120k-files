// fichero 34973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34973;

Registro34973 crear_registro34973(int id) {
    Registro34973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
