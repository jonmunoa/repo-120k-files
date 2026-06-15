// fichero 40609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40609;

Registro40609 crear_registro40609(int id) {
    Registro40609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
