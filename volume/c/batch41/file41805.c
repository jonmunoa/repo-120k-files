// fichero 41805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41805;

Registro41805 crear_registro41805(int id) {
    Registro41805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
