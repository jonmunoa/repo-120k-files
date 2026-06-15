// fichero 34849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34849;

Registro34849 crear_registro34849(int id) {
    Registro34849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
