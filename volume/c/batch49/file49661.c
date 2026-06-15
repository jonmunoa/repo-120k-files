// fichero 49661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49661;

Registro49661 crear_registro49661(int id) {
    Registro49661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
