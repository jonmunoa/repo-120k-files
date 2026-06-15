// fichero 9841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9841;

Registro9841 crear_registro9841(int id) {
    Registro9841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
