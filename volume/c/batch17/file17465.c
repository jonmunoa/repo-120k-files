// fichero 17465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17465;

Registro17465 crear_registro17465(int id) {
    Registro17465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
