// fichero 21841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21841;

Registro21841 crear_registro21841(int id) {
    Registro21841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
