// fichero 26897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26897;

Registro26897 crear_registro26897(int id) {
    Registro26897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
