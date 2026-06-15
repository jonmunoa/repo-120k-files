// fichero 9805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9805;

Registro9805 crear_registro9805(int id) {
    Registro9805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
