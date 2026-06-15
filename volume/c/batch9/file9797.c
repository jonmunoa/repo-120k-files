// fichero 9797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9797;

Registro9797 crear_registro9797(int id) {
    Registro9797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
