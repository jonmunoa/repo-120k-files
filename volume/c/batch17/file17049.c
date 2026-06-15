// fichero 17049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17049;

Registro17049 crear_registro17049(int id) {
    Registro17049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
