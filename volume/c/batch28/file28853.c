// fichero 28853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28853;

Registro28853 crear_registro28853(int id) {
    Registro28853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
