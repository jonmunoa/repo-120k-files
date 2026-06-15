// fichero 41565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41565;

Registro41565 crear_registro41565(int id) {
    Registro41565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
