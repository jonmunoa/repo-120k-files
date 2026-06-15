// fichero 12661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12661;

Registro12661 crear_registro12661(int id) {
    Registro12661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
