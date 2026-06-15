// fichero 35661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35661;

Registro35661 crear_registro35661(int id) {
    Registro35661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
