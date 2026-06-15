// fichero 26905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26905;

Registro26905 crear_registro26905(int id) {
    Registro26905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
