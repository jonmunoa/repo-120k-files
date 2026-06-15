// fichero 9205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9205;

Registro9205 crear_registro9205(int id) {
    Registro9205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
