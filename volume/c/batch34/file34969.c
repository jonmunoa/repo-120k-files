// fichero 34969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34969;

Registro34969 crear_registro34969(int id) {
    Registro34969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
