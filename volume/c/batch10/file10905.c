// fichero 10905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10905;

Registro10905 crear_registro10905(int id) {
    Registro10905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
