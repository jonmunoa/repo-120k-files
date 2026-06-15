// fichero 7661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7661;

Registro7661 crear_registro7661(int id) {
    Registro7661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
