// fichero 25785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25785;

Registro25785 crear_registro25785(int id) {
    Registro25785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
