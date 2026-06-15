// fichero 40241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40241;

Registro40241 crear_registro40241(int id) {
    Registro40241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
