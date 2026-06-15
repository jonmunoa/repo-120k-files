// fichero 17237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17237;

Registro17237 crear_registro17237(int id) {
    Registro17237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
