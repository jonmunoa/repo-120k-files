// fichero 9365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9365;

Registro9365 crear_registro9365(int id) {
    Registro9365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
